#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8DD8
// Address: 0x1b8dd8 - 0x1b8e08
void sub_001B8DD8_0x1b8dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8DD8_0x1b8dd8");
#endif

    switch (ctx->pc) {
        case 0x1b8df0u: goto label_1b8df0;
        default: break;
    }

    ctx->pc = 0x1b8dd8u;

    // 0x1b8dd8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1b8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b8ddc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b8de0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8de4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b8de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b8de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DE8u;
            // 0x1b8dec: 0x8c821fa0  lw          $v0, 0x1FA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8096)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8DF0u;
label_1b8df0:
    // 0x1b8df0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1b8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b8df4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b8df8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8dfc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b8dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b8e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E00u;
            // 0x1b8e04: 0xac861fa4  sw          $a2, 0x1FA4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8E08u;
}
