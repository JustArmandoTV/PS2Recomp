#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00460A90
// Address: 0x460a90 - 0x460aa0
void sub_00460A90_0x460a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460A90_0x460a90");
#endif

    ctx->pc = 0x460a90u;

    // 0x460a90: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x460a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x460a94: 0x3e00008  jr          $ra
    ctx->pc = 0x460A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x460A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460A94u;
            // 0x460a98: 0xac643e30  sw          $a0, 0x3E30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15920), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x460A9Cu;
    // 0x460a9c: 0x0  nop
    ctx->pc = 0x460a9cu;
    // NOP
}
