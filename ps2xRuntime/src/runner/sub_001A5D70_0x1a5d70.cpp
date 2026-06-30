#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5D70
// Address: 0x1a5d70 - 0x1a5d90
void sub_001A5D70_0x1a5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5D70_0x1a5d70");
#endif

    ctx->pc = 0x1a5d70u;

    // 0x1a5d70: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a5d74: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5d78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5d7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5d80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5d84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D88u;
            // 0x1a5d8c: 0x8c8213b4  lw          $v0, 0x13B4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5044)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5D90u;
}
