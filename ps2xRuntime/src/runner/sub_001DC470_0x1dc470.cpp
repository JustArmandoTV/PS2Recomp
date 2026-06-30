#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC470
// Address: 0x1dc470 - 0x1dc490
void sub_001DC470_0x1dc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC470_0x1dc470");
#endif

    ctx->pc = 0x1dc470u;

    // 0x1dc470: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1dc470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1dc474: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc478: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc47c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC47Cu;
            // 0x1dc480: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC484u;
    // 0x1dc484: 0x0  nop
    ctx->pc = 0x1dc484u;
    // NOP
    // 0x1dc488: 0x0  nop
    ctx->pc = 0x1dc488u;
    // NOP
    // 0x1dc48c: 0x0  nop
    ctx->pc = 0x1dc48cu;
    // NOP
}
