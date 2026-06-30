#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0FC8
// Address: 0x1a0fc8 - 0x1a0fe0
void sub_001A0FC8_0x1a0fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0FC8_0x1a0fc8");
#endif

    ctx->pc = 0x1a0fc8u;

    // 0x1a0fc8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a0fcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0fd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a0fd4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FD8u;
            // 0x1a0fdc: 0x8c820518  lw          $v0, 0x518($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1304)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0FE0u;
}
