#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F1E70
// Address: 0x3f1e70 - 0x3f1e80
void sub_003F1E70_0x3f1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1E70_0x3f1e70");
#endif

    ctx->pc = 0x3f1e70u;

    // 0x3f1e70: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1E70u;
            // 0x3f1e74: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1E78u;
    // 0x3f1e78: 0x0  nop
    ctx->pc = 0x3f1e78u;
    // NOP
    // 0x3f1e7c: 0x0  nop
    ctx->pc = 0x3f1e7cu;
    // NOP
}
